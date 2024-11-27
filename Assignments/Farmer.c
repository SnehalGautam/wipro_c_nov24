//9.FARMER PROBLEM STATEMENT

//Mahesh is a farmer and owns 80 acres of land. His land is equally divided into 5 segments. He grows tomatoes in the 1st segment, potatoes in the 2nd segment, cabbage in the 3rd segment, sunflower in the 4th segment and sugarcane in the 5th segment.
//He is converting his land from chemical-driven farming to chemical-free farming. Mahesh starts with the conversion of vegetables into chemical-free produce. He spends the first 6 months doing the same.
//He then converts the sunflower land bank into chemical-free farming. This takes him another 4 months. Finally, he converts sugarcane into chemical-free farming over the next 4 months.
//He gets a yield of the following for tomatoes. 30% of his tomato land gives him 10 tonne yield per acre.
//The remaining 70% of his tomato land gives him 12 tonnes yield per acre. The selling price of tomato is Rs. 7 per Kg.
//The yield of potatoes is 10 tonnes per acre. He sells each kg at Rs. 20.
//The yield of cabbage is 14 tonnes per acre. He sells each kg at Rs. 24.
//The yield of sunflowers is 0.7 tonnes per acre. He sells each kg at Rs. 200.
//The yield of sugarcane is 45 tonnes per acre. He sells each tonne at Rs. 4,000.
//All the crops are sowed at the same time. Mahesh gets the above yield at the above-mentioned rate in one crop cycle across his entire land of 80 acres.
//What is
//a. The overall sales achieved by Mahesh from the 80 acres of land.
//b. Sales realisation from chemical-free farming at the end of 11 months?


#include <stdio.h>
int main() {
   
    float totalLand = 80.0;
    float landPerSegment = totalLand / 5;

    
    float tomatoYield1 = 10.0;  
    float tomatoYield2 = 12.0;  
    float potatoYield = 10.0;
    float cabbageYield = 14.0;
    float sunflowerYield = 0.7;
    float sugarcaneYield = 45.0;

    
    float tomatoPrice = 7.0;  
    float potatoPrice = 20.0; 
    float cabbagePrice = 24.0; 
    float sunflowerPrice = 200.0; 
    float sugarcanePrice = 4000.0; 

    
    float tomatoLand = landPerSegment; 
    float tomatoYieldTotal1 = 0.30 * tomatoLand * tomatoYield1;  
    float tomatoYieldTotal2 = 0.70 * tomatoLand * tomatoYield2;  
    float totalTomatoYield = tomatoYieldTotal1 + tomatoYieldTotal2;
    float totalTomatoRevenue = totalTomatoYield * 1000 * tomatoPrice;  

    
    float totalPotatoYield = potatoYield * landPerSegment;
    float totalPotatoRevenue = totalPotatoYield * 1000 * potatoPrice;  

    
    float totalCabbageYield = cabbageYield * landPerSegment;
    float totalCabbageRevenue = totalCabbageYield * 1000 * cabbagePrice;  

    
    float totalSunflowerYield = sunflowerYield * landPerSegment;
    float totalSunflowerRevenue = totalSunflowerYield * 1000 * sunflowerPrice;  

    
    float totalSugarcaneYield = sugarcaneYield * landPerSegment;
    float totalSugarcaneRevenue = totalSugarcaneYield * sugarcanePrice;

    
    float overallSales = totalTomatoRevenue + totalPotatoRevenue + totalCabbageRevenue + totalSunflowerRevenue + totalSugarcaneRevenue;


    float chemicalFreeSales = totalTomatoRevenue + totalPotatoRevenue + totalCabbageRevenue + totalSunflowerRevenue + totalSugarcaneRevenue;

    printf("a. Overall sales achieved by Mahesh from the 80 acres of land: Rs. %.2f\n", overallSales);
    printf("b. Sales realization from chemical-free farming at the end of 11 months: Rs. %.2f\n", chemicalFreeSales);

    return 0;
}
