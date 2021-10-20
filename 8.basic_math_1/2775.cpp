#include <stdio.h>


int getnum(int step, int room){
    if(step == 0 || room == 1){
        return room;
    }

    return getnum(step-1, room) + getnum(step, room-1); 
}

main(){

    int t, step, room;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &step);
        scanf("%d", &room);
        printf("%d\n", getnum(step, room));
    }
}