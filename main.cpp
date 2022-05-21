#include <iostream>
#include "NotDeterminedMachine.h"
#include <string>



    int main() {
    /*std::string str1;
    std::getline(std::cin, str1);
    NotDeterminedMachine NTM(str1);
    NTM.update_NotDetM();
    size_t i = 0;
    while (i < NTM.states.size()) {
        std::cout << NTM.states[i].first << std::endl;
        i++;
    }*/
    NotDeterminedMachine M;
    M.make_machine();
    while (1) {
        std::string s;
        std::cin >> s;
        if (s == "end") {
            break;
        }
        std::cout << M.string_fits(s, M.start_state) << "\n";
    }
    M.print_transition_table();
    return 0;
}