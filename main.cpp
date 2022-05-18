#include "tinyshow.hpp"

int main()
{
    constexpr int width = 1280;
    constexpr int height = 720;
    std::vector<uint8_t> image(width * height * 3);

    int i = 0;
    for (int y = 0; y < height; y++) {
        for (int w = 0; w < width; w++) {
            image[i++] = uint8_t(w / float(width) * 255);
            image[i++] = uint8_t(y / float(height) * 255);
            image[i++] = 0;
        }
    }
    tinyshow::Show(image, width, height);
    tinyshow::WaitKey();
}
