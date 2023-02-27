public class launchCounter {
    public static void main(String[] args) throws Exception {

    int counter = 10;

    if (counter > 0){

        do
        {

        for (int i = 0; i < 10; i++) {
        
        }
        System.out.printf("T- Minus: %d \n",counter);
        counter--;
        Thread.sleep(1000);
        }
        while (counter > -1);
        
    }

    else if (counter == 0){
        System.out.printf("T- Minus: %d \n",counter);
        System.out.printf("WE HAVE IGNITION!");
        Thread.sleep(1000);
        System.out.printf("LIFTOFF!");
        Thread.sleep(1000);
        System.out.printf("Vechile is nominal!");

    }
}

}
