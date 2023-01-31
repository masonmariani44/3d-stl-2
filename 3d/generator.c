#include <stdlib.h>
#include <stdio.h>
#include "3d.h"

int main() {
    char* file_name;
    file_name = "output.stl";

    Scene3D* scene = Scene3D_create();
    Coordinate3D coordinate;

    coordinate = (Coordinate3D){0, 0, 0};
    Scene3D_add_cuboid(scene, coordinate, 30, 30, 50);
    coordinate = (Coordinate3D){50, 50, 0};
    Scene3D_add_pyramid(scene, coordinate, 35, 71, "up");
    coordinate = (Coordinate3D){-50, 0, 0};
    Scene3D_add_sphere(scene, coordinate, 30, 60);
    coordinate = (Coordinate3D){0, -50, -0};
    Scene3D_add_fractal(scene, coordinate, 30, 4);

    Scene3D_write_stl_text(scene, file_name);
    Scene3D_destroy(scene);
}