/*=============================
 carto.h              k-vernooy
 last modified:      Sun Apr 19

 @desc: Declarations and class
 definitions for Carto library
==============================*/

#include <type_traits>
#include <vector>
#include <array>

namespace Carto 
{
    /*
        Namespace encapsulating all class definitions
        for the Carto library. Includes geometry and graphics.
    */

    template<typename T, typename = std::enable_if_t<std::is_floating_point_v<T>>, typename = std::enable_if_t<std::is_integral_v<T>>>
    class Coordinate 
    {
        protected:
            Coordinate();
    };


    template<typename T, typename = std::enable_if_t<std::is_floating_point_v<T>>, typename = std::enable_if_t<std::is_integral_v<T>>>
    class Cartesian : public Coordinate<T> 
    {
        T x;
        T y;
    };


    template<class T>
    class LinearRing 
    {
        /*
            Contains a single set of coordinate data.
            Analagous to a ring or data or a border.
        */

        public:
            LinearRing(std::vector<Coordinate<T> > border) : border(border) {}

        private:
            std::vector<Coordinate<T> > border;
    };


    template<class T>
    class Polygon 
    {
        public:
            Polygon(std::vector<LinearRing<T> > border, std::vector<LinearRing<T> > holes) : border(border), holes(holes) {}


        private:
            std::vector<LinearRing<T> > border;
            std::vector<LinearRing<T> > holes;
    };


    template<class T>
    class Block 
    {
        /*
            A geographical unit that can be added to a `Map`.
        */

        T getData() {return data};

        private:
            T data;
    };


    class Map
    {
        std::vector<Block> blocks;
        void saveImage()
    };

    class Canvas 
    {
        public:
            void draw();
    };
}