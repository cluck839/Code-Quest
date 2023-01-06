/*
 * Written by...: Christopher Luck
 * Date Written.: 12/18/2022
 * Purpose......: Problem 5 of the 2022 Lockheed Code Quest Competition
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    double planetTemperature;
    int presenceOfWater;
    int survivableSurface;
    double circularOrbits;
} Planets;

void checkPlanet(Planets *);
void createPlanets(void);

int main()
{
    int testCases;
    scanf("%d",&testCases);

    for(int i = 0;i < testCases;i++)
    {
        createPlanets();
    }

    return 0;
}

void checkPlanet(Planets *planet)
{
    if(planet->planetTemperature < 0)
    {
        printf("The planet is too cold.\n");
    }
    else if(planet->planetTemperature > 100)
    {
        printf("The planet is too hot.\n");
    }
    else if(planet->presenceOfWater == 0)
    {
        printf("The planet has no water.\n");
    }
    else if(planet->survivableSurface == 0)
    {
        printf("The planet has no magnetic field\n");
    }
    else if(planet->circularOrbits > 0.6)
    {
        printf("The planet's orbit is not ideal\n");
    }
    else
    {
        printf("The planet is habitable.\n");
    }

}

void createPlanets(void)
{
    Planets planet;
    char aTemp[15];
    char aWater[15];
    char aSurface[15];
    char aOrbit[15];
    scanf("%s %s %s %s", aTemp, aWater, aSurface, aOrbit);
    planet.planetTemperature = strtod(aTemp, NULL);
    if(aWater[0] == 't')
    {
        planet.presenceOfWater = 1;
    }
    else
        planet.presenceOfWater = 0;
    if(aSurface[0] == 't')
    {
        planet.survivableSurface = 1;
    }
    else
        planet.survivableSurface = 0;
    planet.circularOrbits = atof(aOrbit);
    checkPlanet(&planet);
}