//===--- menus.cpp - --------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <utility>
//Other libraries' .h files.
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "menu.hpp"
#include "menu_component.hpp"
#include "menu_item.hpp"
#include "waitress.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr< headfirst::MenuComponent >
    pancake_house_menu (
      new headfirst::Menu( "PANCAKE HOUSE MENU", "Breakfast" ));
  std::unique_ptr< headfirst::MenuComponent >
    diner_menu (new headfirst::Menu( "DINER MENU", "Lunch" ));
  std::unique_ptr< headfirst::MenuComponent >
    dessert_menu (new headfirst::Menu( "DESSERT MENU", "Dessert of course!" ));
  std::unique_ptr< headfirst::MenuComponent >
    cafe_menu (new headfirst::Menu( "CAFE MENU", "Dinner" ));
  std::unique_ptr< headfirst::MenuComponent >
    coffee_menu (new headfirst::Menu( "COFFEE MENU",
                                      "Stuff to go with your afternoon"
                                      " coffee" ));

  pancake_house_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                           (new headfirst::MenuItem(
                               "K&B's Pancake Breakfast",
                               "Pancakes with scrambled eggs, and toast",
                               true,
                               2.99) ));
  pancake_house_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                           (new headfirst::MenuItem(
                               "Regular Pancake Breakfast",
                               "Pancakes with fried eggs, sausage",
                               false,
                               2.99) ));
  pancake_house_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                           (new headfirst::MenuItem(
                               "Blueberry Pancakes",
                               "Pancakes made with fresh blueberries,"
                               " and blueberry syrup",
                               true,
                               3.49) ));
  pancake_house_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                           (new headfirst::MenuItem(
                               "Waffles",
                               "Waffles, with your choice of blueberries"
                               " or strawberries",
                               true,
                               3.59) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "Vegetarian BLT",
                       "(Fakin') Bacon with lettuce & tomato on whole wheat",
                       true,
                       2.99) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "BLT",
                       "Bacon with lettuce & tomato on whole wheat",
                       false,
                       2.99) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "Soup of the day",
                       "A bowl of the soup of the day, with a side of"
                       " potato salad",
                       false,
                       3.29) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "Hotdog",
                       "A hot dog, with saurkraut, relish, onions,"
                       " topped with cheese",
                       false,
                       3.05) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "Steamed Veggies and Brown Rice",
                       "Steamed vegetables over brown rice",
                       true,
                       3.99) ));
  diner_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                   (new headfirst::MenuItem(
                       "Pasta",
                       "Spaghetti with Marinara Sauce, and a slice of"
                       " sourdough bread",
                       true,
                       3.89) ));

  dessert_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                     (new headfirst::MenuItem(
                         "Apple Pie",
                         "Apple pie with a flakey crust, topped with"
                         " vanilla icecream",
                         true,
                         1.59) ));
  dessert_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                     (new headfirst::MenuItem(
                         "Cheesecake",
                         "Creamy new York cheesecake, with a chocolate"
                         " graham crust",
                         true,
                         1.99) ));
  dessert_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                     (new headfirst::MenuItem(
                         "Sorbet",
                         "A scoop of raspberry and a scoop of lime",
                         true,
                         1.89) ));
  diner_menu->Add( std::move(dessert_menu) );

  cafe_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                  (new headfirst::MenuItem(
                      "Veggie Burger and Air Fries",
                      "Veggie burger on a whole wheat bun, lettuce, tomato,"
                      " and fries",
                      true,
                      3.99) ));
  cafe_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                  (new headfirst::MenuItem(
                      "Soup of the day",
                      "A cup of the soup of the day, with a side salad",
                      false,
                      3.69) ));
  cafe_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                  (new headfirst::MenuItem(
                      "Burrito",
                      "A large burrito, with whole pinto beans, salsa,"
                      " guacamole",
                      true,
                      4.29) ));

  coffee_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                    (new headfirst::MenuItem(
                        "Coffee Cake",
                        "Crumbly cake topped with cinnamon and walnuts",
                        true,
                        1.59) ));
  coffee_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                    (new headfirst::MenuItem(
                        "Bagel",
                        "Flavors include sesame, poppyseed, cinnamon raisin,"
                        " pumpkin",
                        false,
                        0.69) ));
  coffee_menu->Add( std::unique_ptr<headfirst::MenuComponent>
                    (new headfirst::MenuItem(
                        "Biscotti",
                        "Three almond or hazelnut biscotti cookies",
                        true,
                        0.89) ));
  cafe_menu->Add( std::move(coffee_menu) );

  std::unique_ptr< headfirst::MenuComponent >
    all_menus (new headfirst::Menu( "ALL MENUS", "All menus combined" ));

  all_menus->Add( std::move(pancake_house_menu) );
  all_menus->Add( std::move(diner_menu) );
  all_menus->Add( std::move(cafe_menu) );

  std::unique_ptr<headfirst::Waitress>
    waitress (new headfirst::Waitress(std::move(all_menus)));
  waitress->PrintMenu();

  return 0;
}
