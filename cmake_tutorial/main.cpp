#include <iostream>
#include <GLFW/glfw3.h>

void display() {
    GLFWwindow *window;
    glfwInit();
    window = glfwCreateWindow(300, 300, "Gears", nullptr, nullptr);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

//int main() {
//    display();
//}
