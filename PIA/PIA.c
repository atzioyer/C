
#include headerPIA.h

int main()
{
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    printf("Welcome to Food Platform for Restaurant, ");
    printf("it's %2d/%2d/%d ", tlocal->tm_mday,tlocal->tm_mon+1,tlocal->tm_year+1900);
    printf("at %d:%d:%2d. \n",tlocal->tm_hour-5,tlocal->tm_min,tlocal->tm_sec);

	while (x!=5){


	printf("\n Choose an option: \n1. Register a new Delivery man \n2. Entrance hour \n3. Check what order to deliver  \n4. Time to arrive to the costumer address \n5. Left hour \n6. Exit \n");
	scanf("%d",&x);

		if (x==1){
		printf("\n Name of delivery man: ");
    		scanf("%s",del[a]);
    		printf("Pin: ");
    		scanf("%s",contr[a]);
    		printf("\nEl You are now register in this system.\n");
    		contu=contu+1;
    		a=a+1;
		}

		if (x==2){

		    printf("\nLista de usuarios\n");
			for(i=0;i+1<=contu;i++){

    		printf("Delivery man code %d is %s \n",i,del[i]);
		}
		    printf("\n Delivery man code: ");
    		scanf("%d",&p);
    		printf("Pin:");
    		scanf("%s",&q[0]);

            result= strcmp(&q[0], &contr[p]);

			if (result==0)
			{
    		printf("Write your entrance hour: ");
    		scanf("%s",&horario_de_entrada[p]);
			}

		}

		if (x==3){
        int Horas(int contr);

        printf("Write your pin to see what time you have to arrive to the costumer address\n");
                    fflush(stdin);
                    scanf("%d", &contr);
        printf("Delivery man whit pin: %d,  have to be at the costumer address to deliver order at: 6:00 pm\n");


		}
		if (x==4){

        printf("Write your pin to see what order to deliver\n");
                    fflush(stdin);
                    scanf("%d", &contr);
        printf("Delivery man whit pin: %d,  have to deliver order: 01\n");

		}

        if (x==5) {
                int k;
			for(k=0;k+1<=contu;k++){
    		printf("Delivery man code %d is %s \n",k,del[k]);
		}
		    printf("\n Delivery man code: ");
    		scanf("%d",&p);
    		printf("Pin:");
    		scanf("%s",&q[0]);

            result= strcmp(&q[0], &contr[p]);

			if (result==0)
			{
    		printf("Write your exit hour: ");
    		scanf("%s",&horario_de_salida[p]);
			}

        }

		if (x==6){

        printf("See you in the next delivery:)");
        exit(1);
		}
	}




	return 0;

	}
