#include <iostream>
#include <vector>
#include <string>

// Define a product structure
struct Product {
    std::string name;
    // Add other product attributes here if needed
};

std::vector<int> linear_search_product(const std::vector<Product>& products, const std::string& targetProduct) {
    std::vector<int> indices; // To store the indices of found products

    for (int i = 0; i < products.size(); ++i) {
        if (products[i].name == targetProduct) {
            indices.push_back(i); // Add the index of the found product
        }
    }

    return indices;
}

int main() {
    // Sample list of products
    std::vector<Product> products = {
        {"ProductA"},
        {"ProductB"},
        {"ProductC"},
        {"ProductA"},
        {"ProductD"},
        {"ProductA"}
    };

    std::string targetProduct = "ProductA";

    std::vector<int> foundIndices = linear_search_product(products, targetProduct);

    if (foundIndices.empty()) {
        std::cout << "Product not found." << std::endl;
    } else {
        std::cout << "Product found at indices: ";
        for (int index : foundIndices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
