/*=============================
 carto.h              k-vernooy
 last modified:      Sun Apr 19

 @desc: Declarations and class
 definitions for Carto library
==============================*/


namespace Carto {
    /*
        Namespace encapsulating all class definitions
        for the Carto library. Includes geometry and graphics.
    */

    namespace Geometry {

        enum CoordinateTypes {
            CARTESIAN,
            POLAR
        };

        // typedef array<float, 2> cartesian;

        template<class T>
        class Block {
            T data;
        };
    }

    namespace Graphics {
        class Canvas {
            
            public:
                void draw();
        };
    }
}