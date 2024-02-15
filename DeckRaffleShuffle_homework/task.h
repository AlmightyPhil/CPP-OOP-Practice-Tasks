DeckRaffleShuffle

Тесте карти:

- метод, който разбърква картите в тестето

- Картите са клас PlayingCards, включващ type (А,К,3,4....) и suit (spades, diamonds, hearts, clubs)

- клас DeckOfCards c метод raffleShuffle, който разделя тестето на две части и взима
  по една от всяка купчинка и метод displayDeck

Бонус функционалности, които съм добавил:

- в игралното тесте(DeckOfCards) може да се добавят колкото искаме тестета от тип PlayingCards чрез метода
  void DeckOfCards::addPile(PlayingCards)
  
- в игралното тесте(DeckOfCards) е добавена функция void DeckOfCards::returnPlayedCardsToDeck(), 
  която връща изиграните карти DeckOfCards::currentPlayedCards обратно в сегашното състояние 
  на тестето(DeckOfCards::currentCardsInDeck)