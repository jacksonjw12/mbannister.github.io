public class Sleep {

    public static void main(String[] args){
        while(true) {
            System.out.println("Going to sleep");
            lookBusy(1000);
            System.out.println("Waking up");
        }
    }

    /*
     * This method sleeps a thread for a given amount of time. If the sleep is
     * interrupted an error message is displayed on the program temrinates.
     */
    public static void lookBusy(int delay) {
        try {
            Thread.sleep(delay);
        } catch (InterruptedException e) {
            System.out.println("Thread interupted while sleeping!");
            System.exit(1);
        }
    }
}
