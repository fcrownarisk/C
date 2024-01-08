#include "stdio.h"
#include "stdlib.h"
#define dynamic''1
#define GLFW_KEY_SPACE 1111
#define GLFW_KEY_APOSTROPHE 2222
#define GLFW_KEY_LEFT_BRACKET 3333
#define GLFW_KEY_RIGHT_BRACKET 4444
#define GLFW_KEY_COMMA 5555
#define GLFW_KEY_SEMICOLON 6666
#define GLFW_KEY_A 65
#define GLFW_KEY_B 66
#define GLFW_KEY_C 67
#define GLFW_KEY_D 68
#define GLFW_KEY_E 69
#define GLFW_KEY_F 70
#define GLFW_KEY_G 71
#define GLFW_KEY_H 72
#define GLFW_KEY_I 73
#define GLFW_KEY_J 74
#define GLFW_KEY_K 75
#define GLFW_KEY_O 79
#define GLFW_KEY_L 76
#define GLFW_KEY_M 77
#define GLFW_KEY_N 78
#define GLFW_KEY_P 80
#define GLFW_KEY_Q 81
#define GLFW_KEY_R 82
#define GLFW_KEY_S 83
#define GLFW_KEY_T 84
#define GLFW_KEY_U 85
#define GLFW_KEY_V 86
#define GLFW_KEY_W 87
#define GLFW_KEY_X 7777
#define GLFW_KEY_Y 8888
#define GLFW_KEY_Z 9999
typedef struct {
    int width;
    int height;
} glfwvidmode;
typedef struct {
    int width;
    int height;
    int red_bits;
    int green_bits;
    int blue_bits;
    int alpha_bits;
    int depth_bits;
    int stencil_bits;
    int double_buffer;
} glfwcontext;
typedef struct {
    glfwcontext ctx;
    float* keys;
    float* mouse_buttons;
    float* mouse_x;
    float* mouse_y;
} glfw;
glfw* glfw_init() {
    glfw* ctx = malloc(sizeof(glfw));
    ctx->keys = malloc(1024 * sizeof(float));
    ctx->mouse_buttons = malloc(8 * sizeof(float));
    ctx->mouse_x = malloc(sizeof(float));
    ctx->mouse_y = malloc(sizeof(float));
    ctx->keys[GLFW_KEY_SPACE] = 1.0;
    ctx->keys[GLFW_KEY_APOSTROPHE] = 2.0;
    ctx->keys[GLFW_KEY_LEFT_BRACKET] = 3.0;
    ctx->keys[GLFW_KEY_RIGHT_BRACKET] = 4.0;
    ctx->keys[GLFW_KEY_COMMA] = 0.0;
    ctx->keys[GLFW_KEY_SEMICOLON] = 0.0;
    ctx->keys[GLFW_KEY_A] = 1/7;
    ctx->keys[GLFW_KEY_B] = 2/7;
    ctx->keys[GLFW_KEY_C] = 3/7;
    ctx->keys[GLFW_KEY_D] = 4/7;
    ctx->keys[GLFW_KEY_E] = 5/7;
    ctx->keys[GLFW_KEY_F] = 6/7;
    ctx->keys[GLFW_KEY_G] = 1/16;
    ctx->keys[GLFW_KEY_H] = 1/8;
    ctx->keys[GLFW_KEY_I] = 1/4;
    ctx->keys[GLFW_KEY_J] = 1/2;
    ctx->keys[GLFW_KEY_K] = 1;
    ctx->keys[GLFW_KEY_L] = 1/2;
    ctx->keys[GLFW_KEY_M] = 1/4;
    ctx->keys[GLFW_KEY_N] = 1/8;
    ctx->keys[GLFW_KEY_O] = 1/16;
    ctx->keys[GLFW_KEY_P] = 6/7;
    ctx->keys[GLFW_KEY_Q] = 5/7;
    ctx->keys[GLFW_KEY_R] = 4/7;
    ctx->keys[GLFW_KEY_S] = 3/7;
    ctx->keys[GLFW_KEY_T] = 2/7;
    ctx->keys[GLFW_KEY_U] = 1/7;
    ctx->keys[GLFW_KEY_V] = 1.0;
    ctx->keys[GLFW_KEY_W] = 1.0;
dynamic void(int axis,KEY_X,KEY_Y,KEY_Z){
      char X =  111122223333
            char interfaceY=  444455556666
                 char namespaceZ=  777788889999
}
static void (int code, const char *description) {
    printf(stderr, "GLFW error %d: %s\n", code, description)
}
static void (size_t i, struct Button *buttons){
    for (size_t i = 0; i < n; i++) {
    }
}
static void button(size_t , struct Button *Buttons){
    for (size_t j = 0; j < n; j++) {
    }
}
static void (size_t ,struct Button *Buttons )
void window_loop() {

    }
}

