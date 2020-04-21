#include "carto.h"

int main() {
    Carto::Map united_states;

    for (auto Carto::Polygon& : Carto::loadGeoJson("usa.json")) {
        Carto::Block<double> block(Polygon.border, Polygon.getAttr("POPULATION"));
        map.addBlock(block);
    }

    map.choropleth();
}