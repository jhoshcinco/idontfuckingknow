//
// Created by Jhosh on 2023-10-15.
//

#include "Item.h"

//constructor
Item::Item(int itemId, const std::string &name, int quantity, const std::string &purchaseDate,
           const std::string &expiryDate) {
    this->itemId = itemId;
    this->name = name;
    this->quantity = quantity;
    this->purchaseDate = purchaseDate;
    this->expiryDate = expiryDate;
}

//setter
void Item::setItemId(int itemId) {
    Item::itemId = itemId;
}

void Item::setName(const std::string &name) {
    Item::name = name;
}

void Item::setQuantity(int quantity) {
    Item::quantity = quantity;
}

void Item::setPurchaseDate(const std::string &purchaseDate) {
    Item::purchaseDate = purchaseDate;
}

void Item::setExpiryDate(const std::string &expiryDate) {
    Item::expiryDate = expiryDate;
}

//getter
int Item::getItemId() const {
    return itemId;
}

std::string Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}

std::string Item::getPurchaseDate() const {
    return purchaseDate;
}

std::string Item::getExpiryDate() const {
    return expiryDate;
}


