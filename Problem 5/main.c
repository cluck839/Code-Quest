#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct
{
    float planetTemperature;
    bool presenceOfWater;
    bool survivableSurface;
    float circularOrbits;
} Planets;

void checkPlanet(Planets *);
void createPlanets(void);
void extractPlanetData(char *,Planets *);
int main()
{
    int testCases;
    scanf("%d",&testCases);

    /*if((planets = calloc(testCases, sizeof(Planets))) == NULL)
    {
        return 1;
    }*/
    for(int i = 0;i < testCases;i++)
    {
        createPlanets();
    }

    //free(planets);
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
    else if(planet->presenceOfWater == '0')
    {
        printf("The planet has no water.\n");
    }
    else if(planet->survivableSurface == '0')
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
    char *pPlanet1;
    if((pPlanet1 = calloc(100,sizeof(char))) == NULL)
    {
        printf("Not allocated.");
        exit(-1);
    }
    scanf("%c",pPlanet1);
    extractPlanetData(pPlanet1,&planet);
    checkPlanet(&planet);
    free(pPlanet1);
}

void extractPlanetData(char *pPlanet,Planets *planetStruct)
{
    double planetTemperature;
    bool presenceOfWater;
    bool survivableSurface;
    double circularOrbits;
    char *pPlanetArray;
    if((pPlanetArray = calloc(4,sizeof(char))) == NULL)
    {
        printf("Not allocated.");
        exit(-1);
    }
    for(int i = 0;i < 4;i++)
    {
        pPlanetArray[i] = (char) strtok(pPlanet, " ");
        printf("%c", pPlanet[i]);
    }

    free(pPlanet);

    /*planet.planetTemperature = planetTemperature;
    if(presenceOfWater == 'true')
    {
        planet.presenceOfWater = 1;
    }
    else
        planet.presenceOfWater = 0;
    if (survivableSurface == 'true')
    {
        planet.survivableSurface = 1;
    }
    else
        planet.survivableSurface = 0;
    planet.circularOrbits = circularOrbits;*/
}