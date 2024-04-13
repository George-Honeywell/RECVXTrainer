#pragma once


class MemoryStorage
{
public:

	struct ClaireInventory 
	{
		const LPCVOID slotZero		 = (LPCVOID)0x20433376; // Personal slot
		
		
		const LPCVOID m_slotOne					= (LPCVOID)0x2043337A;
		const LPCVOID m_slotOneQuantity = (LPCVOID)0x20433378;
		const LPCVOID m_slotOneFlags    = (LPCVOID)0x2043337B;


		const LPCVOID slotTwo  = (LPCVOID)0x2043337E;
		const LPCVOID slotThree	 = (LPCVOID)0x20433382;
		const LPCVOID slotFour	 = (LPCVOID)0x20433386;
		const LPCVOID slotFive		 = (LPCVOID)0x2043338A;
		const LPCVOID slotSix  = (LPCVOID)0x2043338E;
		const LPCVOID slotSeven  = (LPCVOID)0x20433392;
		const LPCVOID slotEight	 = (LPCVOID)0x20433396;
		const LPCVOID slotNine		 = (LPCVOID)0x2043339A; // Side-pack
		const LPCVOID slotTen = (LPCVOID)0x2043339E; // Side-pack
	} m_claireInvent;						 

};