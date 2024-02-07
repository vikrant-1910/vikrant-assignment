import math

def cylinder_surface_volume(radius, height):
    surface_area = 2 * math.pi * radius * (radius + height)
    volume = math.pi * radius ** 2 * height
    return surface_area, volume

print(cylinder_surface_volume(3, 5))

