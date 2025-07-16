#include "ImageProcessor.hpp"

int main() {
    ImageProcessor processor;

    std::string image = "test_image.jpg";

    std::cout << "--- Applying CLAHE ---\n";
    processor.setFilter(std::make_unique<CLAHEFilter>());
    processor.processImage(image);

    std::cout << "\n--- Switching to Brightness Filter ---\n";
    processor.setFilter(std::make_unique<BrightnessFilter>());
    processor.processImage(image);

    std::cout << "\n--- Switching to Histogram Equalization ---\n";
    processor.setFilter(std::make_unique<HistogramEqualizationFilter>());
    processor.processImage(image);

    return 0;
}