/*=============================
 carto.h              k-vernooy
 last modified:      Sun Apr 19

 @desc: Declarations and class
 definitions for Carto library
==============================*/

#include <type_traits>
#include <vector>
#include <array>

namespace Carto {
    /*
        Namespace encapsulating all class definitions
        for the Carto library. Includes geometry and graphics.
    */

    class Geometry {

        private:
            template<typename T, typename = std::enable_if_t<std::is_floating_point_v<T>>, typename = std::enable_if_t<std::is_integral_v<T>>>
            class Coordinate {
                private:
                    T x;
                    T y;

                public:
                    x() {return y};
                    y() {return x};
            };
        

        public: 
            template<typename T, typename = std::enable_if_t<std::is_floating_point_v<T>>, typename = std::enable_if_t<std::is_integral_v<T>>>
            class Cartesian : public Coordinate<T> {
                T x;
                T y;
            };



            class LinearRing {
                /*
                    Contains a single set of coordinate data.
                    Analagous to a ring or data or a border.
                */

                LinearRing(std::vector<Coordinate<double>>);
                LinearRing(std::vector<Coordinate<int>>);
                LinearRing(std::vector<Coordinate<float>>);
            };


            template<class T>
            class Polygon {
                LinearRing<t> border;
            };


            template<class T>
            class Block {

                
                T data;
            };
        
        protected:
            Geometry();
    };

    namespace Graphics {
        class Canvas {
            
            public:
                void draw();
        };
    }
}