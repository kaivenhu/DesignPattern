#include <iostream>

#include <decorator/side_decorator.h>

#include "sides.h"

namespace decorator {

Side_U SideFactory::CreateSide(const SideType s)
{
    Side_U side = nullptr;
    switch (s) {
        case SideType::POTATO:
            side = std::make_unique<Potato>();
            break;
        case SideType::SPINACH:
            side = std::make_unique<Spinach>();
            break;
        case SideType::MUSHROOM:
            side = std::make_unique<Mushroom>();
            break;
        case SideType::TOMATO:
            side = std::make_unique<Tomato>();
            break;
        case SideType::CHEESE:
            side = std::make_unique<Cheese>();
            break;
        default:
            std::cout << "[Error] Invalid side dish type: " << static_cast<int>(s) << std::endl;
            break;
    }
    return side;
}

Order_U SideFactory::SideDecorateChain(
        const MainDish *main_dish, const std::list<SideType> &AllSides)
{
    Order_U main_order = std::make_unique<MainDish>(*main_dish);

    for (const auto s: AllSides) {
        Side_U side = CreateSide(s);
        if (nullptr != side) {
            side->ToOrder(std::move(main_order));
            main_order = std::move(side);
        }
    }
    return main_order;
}

}
