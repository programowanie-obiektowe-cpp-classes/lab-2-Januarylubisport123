
#pragma once
#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* res; 

public:
    
    ResourceManager() : res(new Resource()) {}

    
    ~ResourceManager() { delete res; }

    
    ResourceManager(const ResourceManager& other) : res(new Resource(*other.res)) {}

    
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this == &other)
            return *this;                         
        Resource* tmp = new Resource(*other.res); 
        delete res;                               
        res = tmp;                                
        return *this;                             
    }

   
    double get() { return res->get(); }
};
