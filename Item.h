//
// Created by Jhosh on 2023-10-15.
//

#ifndef IDONTFUCKINGKNOW_ITEM_H
#define IDONTFUCKINGKNOW_ITEM_H
#include <string>

class Item {

private:
    int itemId;
    int quantity;
    std::string name;
    std::string purchaseDate;
    std::string expiryDate;
public:
//    constructor
    Item(int itemId,const std::string& name,int quantity,const std::string& purchaseDate,const std::string& expiryDate);
//setter
    void setItemId(int itemId);
    void setName(const std::string& name);
    void setQuantity(int quantity);
    void setPurchaseDate(const std::string& purchaseDate);
    void setExpiryDate(const std::string& expiryDate);

//getter
    int getItemId() const;
    std::string getName() const;
    int getQuantity() const;
    std::string getPurchaseDate() const;
    std::string getExpiryDate() const;
};


#endif //IDONTFUCKINGKNOW_ITEM_H
