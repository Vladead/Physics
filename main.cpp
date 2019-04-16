#include <iostream>
#include "Dot.h"
#include "Process.h"

int main() {
    Dot plus_electrode, minus_electrode, point_form_input; // TODO Слава должен заполнить эти данные

    plus_electrode.x = 9.2;
    plus_electrode.y = 14.4;
    minus_electrode.x = 30.1;
    minus_electrode.y = 14.4;

    point_form_input.x = 15.2;
    point_form_input.y = 7.8;

    Potential(point_form_input, plus_electrode, minus_electrode);

    return 0;
}