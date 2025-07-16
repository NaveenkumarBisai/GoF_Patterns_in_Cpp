#pragma once
#include <iostream>
#include <string>

class ImageFilter {
public:
    virtual void apply(const std::string& image) const = 0;
    virtual ~ImageFilter() = default;
};

// ----- Concrete Strategies -----

class CLAHEFilter : public ImageFilter {
public:
    void apply(const std::string& image) const override {
        std::cout << "Applying CLAHE filter to " << image << std::endl;
    }
};

class BrightnessFilter : public ImageFilter {
public:
    void apply(const std::string& image) const override {
        std::cout << "Adjusting brightness for " << image << std::endl;
    }
};

class HistogramEqualizationFilter : public ImageFilter {
public:
    void apply(const std::string& image) const override {
        std::cout << "Applying histogram equalization to " << image << std::endl;
    }
};