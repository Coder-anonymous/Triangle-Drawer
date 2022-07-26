#include <GLFW/glfw3.h>
#include <iostream>

class WindowClass {
public:
    void createWindow(int xSize, int ySize) {
        GLFWwindow* window;
        if (!glfwInit()) {
            std::cout << "Window Failed To Initalize";
        }

        window = glfwCreateWindow(xSize, ySize, "Test Window", NULL, NULL);
        if (!window)
        {
            std::cout << "Window Failed To Load";

            glfwTerminate();
        }

        glfwMakeContextCurrent(window);
        while (!glfwWindowShouldClose(window))
        {
            glClear(GL_COLOR_BUFFER_BIT);
            glBegin(GL_TRIANGLES);
            glVertex2f(-0.5f, -0.5f);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.6f, -0.6f);
            glEnd();
            glfwSwapBuffers(window);

            glfwPollEvents();
        }

        glfwTerminate();

    }
};