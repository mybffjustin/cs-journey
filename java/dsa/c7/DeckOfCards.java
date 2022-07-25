// Justin Hoang
// 2022-JUL-24-SUN

public class DeckOfCards {

  public static void main(String[] args) {
    int[] deck = new int[52];
    String[] suits = {"Spades", "Hearts", "Diamonds",
        "Clubs"}; // Create array "suits" for four suits
    String[] ranks = {"Ace", "2", "3", "4",
        "5", "6", "7", "8", "9",
        "10", "Jack", "Queen", "King"}; // Create array "ranks" for 13 cards in a suit

    // Initialize the cards
    for (int i = 0; i < deck.length; i++) {
      deck[i] = i;
    }

    // Shuffle the cards
    for (int i = 0; i < deck.length; i++) {
      // Generate an index randomly
      int index = (int) (Math.random() * deck.length);
      int temp = deck[i];
      deck[i] = deck[index];
      deck[index] = temp;
    }

    // Display the first four cards
    for (int i = 0; i < 4; i++) {
      int cardNumber = (int) (Math.random() * deck.length);
      String suit = suits[cardNumber / 13];
      String rank = ranks[cardNumber % 13];
      System.out.println("Card number " + cardNumber + ": "
          + rank + " of " + suit);
    }
  }
}