// Asfand Khan
// Date: Sept 24, 2024
// Description: Animal Printing

#include <iostream>

void butterfly() {
  std::cout << "  .==-.                   .-==.     \n";
  std::cout << "   \\(8`-._  `.   .'  _.-'8(/     \n";
  std::cout << "   (88\"   ::.  \\./  .::   \"88     \n";
  std::cout << "    \\_.'`-::::.(#.::::-'`._/      \n";
  std::cout << "      `._... .q(_p. ..._.'         \n";
  std::cout << "        \"\"-..-'|=|`-..-\"\"       \n";
  std::cout << "        .\"\"' .'|=|`. `\"\".       \n";
  std::cout << "      ,':8(o./|=|\\.(o8:`.        \n";
  std::cout << "     (O :8 ::/ \\_/ \\:: 8: O      \n";
  std::cout << "      \\O `::/       \\::' O/       \n";
  std::cout << "       \"\"--'         `--\"\"   hjw\n";

}

void elephant() {
  std::cout << "       _..--\"\"-.                  .-\"\"--.._ \n";
  std::cout << "   _.-'         \\ __...----...__ /         '-._\n";
  std::cout << " .'      .:::...,'              ',...:::.      '.\n";
  std::cout << "(     .'``'''::;                  ;::'''``'.     \n";
  std::cout << " \\             '-              (-'             /\n";
  std::cout << "  \\             /                \\             /\n";
  std::cout << "   \\          .'.-.            .-.'.          /\n";
  std::cout << "    \\         | \\0|            |0/ |         /\n";
  std::cout << "    |          \\  |   .-==-.   |  /          |\n";
  std::cout << "     \\          `/`;          ;`\\`          /\n";
  std::cout << "      '.._      (_ |  .-==-.  | _      _..'\n";
  std::cout << "          `\"`\"-`/ `/'        '\\` \\`-\"`\"`\n";
  std::cout << "               / /`;   .==.   ;`\\ \\\n";
  std::cout << "         .---./_/   \\  .==.  /   \\ \\\n";
  std::cout << "        / '.    `-.__       |    `\"\n";
  std::cout << "       | =(`-.        '==.   ;\n";
  std::cout << " jgs    \\  '. `-.           /\n";
  std::cout << "         \\_:_   `\"--.....-'\n";

}

void teddybear() {
  std::cout << "            ___   .--. \n";
  std::cout << "      .--.-\"   \"-' .- |\n";
  std::cout << "     / .-,`          .'\n";
  std::cout << "     \\   `           \\\n";
  std::cout << "      '.            ! \\\n";
  std::cout << "        |     !  .--.  |\n";
  std::cout << "        \\        '--'  /.____\n";
  std::cout << "       /`-.     \\__,'.'      `\\\n";
  std::cout << "    __/   \\`-.____.-' `\\      /\n";
  std::cout << "    | `---`'-'._/-`     \\----'    _\n";
  std::cout << "    |,-'`  /             |    _.-' `\\\n";
  std::cout << "   .'     /              |--'`     / |\n";
  std::cout << "  /      /\\              `         | |\n";
  std::cout << "  |   .\\/  \\      .--. __          \\ |\n";
  std::cout << "   '-'      '._       /  `\\         /\n";
  std::cout << "      jgs      `\\    '     |------'`\n";
  std::cout << "                 \\  |      |\n";
  std::cout << "                  \\        /\n";
  std::cout << "                   '._  _.'\n";
  std::cout << "                      ``\n";

}

void snake() {
  std::cout << "         ,,'6''-,.\n";
  std::cout << "        <====,.;;--.\n";
  std::cout << "        _`---===. \"\"\"==__\n";
  std::cout << "      //\"\"@@-\\===\\@@@@ \"\"\\\\\n";
  std::cout << "     |( @@@  |===|  @@@  ||\n";
  std::cout << "      \\\\ @@   |===|  @@  //\n";
  std::cout << "        \\\\ @@ |===|@@@ //\n";
  std::cout << "         \\\\  |===|  //\n";
  std::cout << "___________\\\\|===| //_____,----\"\"\"\"\"\"\"\"\"\"-----,_\n";
  std::cout << "  \"\"\"\"---,__`\\===`/ _________,---------,____    `,\n";
  std::cout << "             |==||                           `\\   \\\n";
  std::cout << "            |==| |          pb                    |\n";
  std::cout << "           |==| |       _____         ______,--'   '\n";
  std::cout << "           |=|  `----\"\"\"     `\"\"\"\"\"\"\"\"         _,-'\n";
  std::cout << "            `=\\     __,---\"\"\"-------------\"\"\"''\n";
  std::cout << "                \"\"\"\"		\n";

}

int main() {
  int choice;

  std::cout << "1. Butterfly " << std::endl;
  std::cout << "2. Elephant  " << std::endl;
  std::cout << "3. Teddy Bear" << std::endl;
  std::cout << "4. Snake     " << std::endl;

  std::cout << "\nWhich animal to draw? ";
  std::cin >> choice;

  if (choice == 1) {
    // It calls the function twice resulting in the butterfly printing twice to the output, so you see two butterflies in the output.
    butterfly();
    butterfly();
  } else if (choice == 2) {
    elephant();
  } else if (choice == 3) {
    teddybear();
  } else if (choice == 4) {
    snake();
  } else {
    std::cout << "Sorry, that wasn't one of the choices.";
  }

  std::cout << "\nGoodbye!";
}