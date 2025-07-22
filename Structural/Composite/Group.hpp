#pragma once
#include "Graphic.hpp"
#include <vector>
#include <memory>
#include <iostream>

class Group : public Graphic {
    std::string groupName;
    std::vector<std::shared_ptr<Graphic>> children;
public:
    Group(const std::string& name) : groupName(name) {}

    void add(const std::shared_ptr<Graphic>& g) {
        children.push_back(g);
    }

    void draw() const override {
        std::cout << "📦 Drawing Group: " << groupName << "\n";
        for (const auto& child : children) {
            child->draw();
        }
    }

    std::string name() const override {
        return groupName;
    }
};