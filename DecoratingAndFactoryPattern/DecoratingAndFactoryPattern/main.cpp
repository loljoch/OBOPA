// DecoratingAndFactoryPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "ShamanDecorator.h"
#include "SoldierDecorator.h"
#include "FarmerDecorator.h"

#include "OrcNPC.h"
#include "ElfNPC.h"

   /// <summary>Returns an NPC class with a species and role
   /// <param name='_species'>0: Orc, 1: Elf</param>
   /// <param name='_isFarmer'>Is this NPC a farmer?</param>
   /// <param name='_isShaman'>Is this NPC a shaman?</param>
   /// <param name='_isSoldier'>Is this NPC a soldier?</param>
   /// <param name='_npcName'>Name of the NPC</param>
   /// </summary>
NPC* createNpc(int _species, bool _isFarmer, bool _isShaman, bool _isSoldier, std::string _npcName) {
	NPC* npc;

	switch (_species)
	{
	case 0:
		if (_isFarmer) {
			if (_isSoldier) {
				if (_isShaman) {
					npc = new FarmerDecorator(new SoldierDecorator(new ShamanDecorator(new ElfNPC(_npcName))));
				}
				else {
					npc = new FarmerDecorator(new SoldierDecorator(new ElfNPC(_npcName)));
				}
			}
			else if (_isShaman) {
				npc = new FarmerDecorator(new ShamanDecorator(new ElfNPC(_npcName)));
			}
			else {
				npc = new FarmerDecorator(new ElfNPC(_npcName));
			}
		}
		else if (_isSoldier) {
			if (_isShaman) {
				npc = new SoldierDecorator(new ShamanDecorator(new ElfNPC(_npcName)));
			}
			else {
				npc = new SoldierDecorator(new ElfNPC(_npcName));
			}
		}
		else if (_isShaman) {
			npc = new ShamanDecorator(new ElfNPC(_npcName));
		}
		break;
	case 1:
		if (_isFarmer) {
			if (_isSoldier) {
				if (_isShaman) {
					npc = new FarmerDecorator(new SoldierDecorator(new ShamanDecorator(new OrcNPC(_npcName))));
				}
				else {
					npc = new FarmerDecorator(new SoldierDecorator(new OrcNPC(_npcName)));
				}
			}
			else if (_isShaman) {
				npc = new FarmerDecorator(new ShamanDecorator(new OrcNPC(_npcName)));
			}
			else {
				npc = new FarmerDecorator(new OrcNPC(_npcName));
			}
		}
		else if (_isSoldier) {
			if (_isShaman) {
				npc = new SoldierDecorator(new ShamanDecorator(new OrcNPC(_npcName)));
			}
			else {
				npc = new SoldierDecorator(new OrcNPC(_npcName));
			}
		}
		else if (_isShaman) {
			npc = new ShamanDecorator(new OrcNPC(_npcName));
		}
		break;
	default:
		std::cout << "Incorrect species, can't process";
		break;
	}

	return npc;
}


int main()
{
	NPC* newNpc = createNpc(1, true, true, true, "Elvis");
	newNpc->render();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
