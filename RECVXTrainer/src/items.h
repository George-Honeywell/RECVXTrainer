#include <cstddef>
#include <iostream>

std::string GetItemByName(int item)
{
	switch (item)
	{
	case 0:
		return "Nothing";

	case 1:
		return "Rocket Launcher";

	case 2:
		return "Assault Rifle";

	case 3:
		return "Sniper Rifle";

	case 4:
		return "Shotgun";

	case 5:
		return "Handgun - Glock 17";

	case 6:
		return "Grenade Launcher";

	case 7:
		return "Bow Gun";

	case 8:
		return "Combat Knife";

	case 9:
		return "Handgun";

	case 10:
		return "Custom Handgun";

	case 11:
		return "Linear Launcher";

	default:
		return "Item ID not found...";
	}
}