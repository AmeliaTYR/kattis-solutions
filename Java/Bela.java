// Bela

import java.util.Scanner;

public class Bela {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int hands = sc.nextInt();
        String suit = sc.next();

        int draws = hands * 4;
        int score = 0;

        for (int i = 0; i < draws; i++) {
            String draw = sc.next();

            String drawCard = String.valueOf(draw.charAt(0));
            String drawSuit = String.valueOf(draw.charAt(1));

            if (drawCard.equals("J")){
                if (drawSuit.equals(suit)) {
                    score += 20;
                } else {
                    score += 2;
                }
            } else if (drawCard.equals("9")) {
                if (drawSuit.equals(suit)) {
                    score += 14;
                } else {
                    score += 0;
                }
            } else if (drawCard.equals("A")) {
                score += 11;
            } else if (drawCard.equals("K")) {
                score += 4;
            } else if (drawCard.equals("Q")) {
                score += 3;
            } else if (drawCard.equals("T")) {
                score += 10;
            }  else {
                continue;
            }

        }

        System.out.println(score);
        sc.close();
    }
}