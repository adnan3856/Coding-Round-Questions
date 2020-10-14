public static void main(String[] args) {
        Scanner scan = new Scanner((System.in));
        int min = 100, max = 999, i = 2, rem, count = 0;
        int[] arr = new int[3];
        boolean guess = true;
        int number = (int) Math.floor(Math.random() * (max - min) + min);
        //System.out.println(number);
        int generatedNumber=number;
        while (number > 0) {
            rem = number % 10;
            arr[i] = rem;
            i--;
            number = number / 10;
        }
        while (guess) {
            long startTime=System.currentTimeMillis();
            if (count <= 30) {
                System.out.println("Enter Your Guess...");
                count++;
                int guessNumber = scan.nextInt();
                long endTime=System.currentTimeMillis();
                if (guessNumber >= 100 && guessNumber <= 999)
                    if((endTime-startTime)<=60000)
                        guess = guessTheGame(guessNumber, arr,generatedNumber);
                    else {
                        System.out.println("Time out...Please read above rules.");
                        guess=false;
                    }
                else
                    System.out.println("Please Enter a three digit number.");
            }
            else {
                System.out.println("You are out of steps... The guessed number is: " + generatedNumber);
                guess=false;
            }

        }
        System.out.println("the number of guesses made: " + count);
    }
