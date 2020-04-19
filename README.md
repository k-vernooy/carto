# Carto
A header-only C++11 cartography visualization library.

## Installation

Depending on the way Carto is compiled, different dependencies will be required.
- For use with drawing to GUI, the [SDL2](https://www.libsdl.org/) library is required.
- Writing to images will require either the Cimg package or ImageMagick


To obtain the source, clone this repository.
```bash
git clone 'https://github.com/k-vernooy/carto'
```

To compile the available binaries for drawing from geojson and other files, perform the following:

```bash
cd carto
make && make install
```

For use with the library, just add `<carto.h>` to your include path.

## Usage

Provided the file `geojson.json` as a group of polygons, the following will write a simple, default map to `map.jpg`:
``` c++
#include <carto.h>
#include <string>

int main() 
{

    std::string readPath = "geojson.json";
    std::string writePath = "map";

    Carto::Canvas canvas(500, 600);

    for (auto& polygon : Carto::readJson(readPath)) 
    {
        Carto::Block<double> block(polygon);
        canvas.addBlock(block);
    }
        
    canvas.toImage(writePath, Carto::JPG);
}
```