#include <vulkan/vulkan.h>
#include <iostream>

int main(){
    VkApplicationInfo appinfo = {};
    appinfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appinfo.pApplicationName = "Hatchet";
    appinfo.pEngineName = "Air-Engine";

    VkInstanceCreateInfo instanceinfo = {};
    instanceinfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceinfo.pApplicationInfo = &appinfo;

    VkInstance instance;

    VkResult result = vkCreateInstance(&instanceinfo, 0, &instance);
    if(result == VK_SUCCESS)
    {
        std::cout << "Yo This works" << std::endl;
    }
    return 0;
}