#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>


int main(){
    GLFWwindow* window;

    if(!glfwInit())
        return -1;
    
    
    
    window = glfwCreateWindow(400, 400, "SIGMA BOY", NULL, NULL);

    if(!window){
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    float vertex[] = {
        0.5f, 0.5f,
        -0.5f, 0.5f,
        0.5f, -0.5f
    };

    //glBindVertexBuffer(0, )

    if(glewInit() != GLEW_OK){
        std::cout << "ERROR" << std::endl;
    }

    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        //glColor3i(1.0f, 1.0f, 1.0f);
        glEnd();

        glfwSwapBuffers(window);

        glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}