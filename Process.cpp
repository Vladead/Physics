#include <cmath>

//
// Created by vladead on 12.04.19.
//

#include <cmath>
#include "Process.h"
#include "Dot.h"

float Distance(Dot begin_of_line, Dot end_of_line) {
    // begin_of_line - точка с координатами начала r. Нужно вводить точку с координатами электрода
    // end_of_line - точка с координатами конца r. Нужно вводить точку,на которую нажал пользователь
    //---------------------------------------------------------------------------------------------------Находит длину r

    Dot temp;
    float distance = 0;
    temp.x = end_of_line.x - begin_of_line.x;
    temp.y = end_of_line.y - begin_of_line.y;
    distance = static_cast<float>(sqrt(pow(temp.x, 2) + pow(temp.y, 2)));

    return distance;
}

float Potential(Dot point_from_input, Dot plus_electrode, Dot minus_electrode) {
    // point_from_input - точка, на которую нажал пользователь
    //----------------------------------------------------------Вычисляет потенциал точки, на которую нажал пользователь

    const float delta_fi = 13.6; // Разность потенциалов электродов
    const float electrode_radius = 0.15; // Радиус электрода //TODO уточнить радиус на опытной установке
    const float electrode_distance = 0.209; // Расстояние между электродами

    float fi = 0, r1 = 0, r2 = 0; // r1 - это расстояние от положительного электрода. Положительный - это левый
                                        // r2 - это расстояние от отрицательного электрода. Отрицательный - это правый
    r1 = Distance(plus_electrode, point_from_input);
    r2 = Distance(minus_electrode, point_from_input);
    fi = delta_fi / (4 * std::log((electrode_distance - electrode_radius) / electrode_radius)) * ((r2 - r1) / r1 * r2);

    return fi;
}