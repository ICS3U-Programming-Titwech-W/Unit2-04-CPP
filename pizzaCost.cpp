// Copyright (c) 2022 Titwech All rights reserved.
//
// Created by: Titwech
// Date: March 11. 2022
// This program usees the users input
// to get the price of a pizza


#include <iostream>
#include <iomanip>

const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

// declaring variables
float tax, total, diameter, subtotal, finalCost;

int main() {
  // get the radius from the user
  std::cout << "Enter the diameter of the pizza (in): ";
  std::cin >> diameter;

  // process
  subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST *
  diameter;
  tax = HST * subtotal;
  total = subtotal + tax;

  // output
  std::cout << "The final cost is: $" << std::fixed <<
  std::setprecision(2) << std::setfill('0') << total <<
  std::endl;
}
