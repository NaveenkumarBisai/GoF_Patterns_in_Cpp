#pragma once
#include "ImageFilter.hpp"
#include <memory>

class ImageProcessor {
private:
    std::unique_ptr<ImageFilter> filter;

public:
    void setFilter(std::unique_ptr<ImageFilter> newFilter) {
        filter = std::move(newFilter);
    }

    void processImage(const std::string& image) const {
        if (filter)
            filter->apply(image);
        else
            std::cout << "No filter set for " << image << std::endl;
    }
};