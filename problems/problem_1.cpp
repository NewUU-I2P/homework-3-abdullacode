float problemSolution1(float consumed_water) {
    float cost=13;
    if (30>=consumed_water){
        cost+= consumed_water*0.4;
    }else if(consumed_water>30 && 50>=consumed_water){
        cost+= 30*0.4+(0.12*(consumed_water-30));
    }else if (consumed_water>50 && 60>=consumed_water){
        cost+=(30*0.4)+(20*0.12)+(1.4*(consumed_water-50));

}else{
            cost+=(30*0.4)+(20*0.12)+1.4*10+(consumed_water-60)*1.5;
    }


    return cost;
}
