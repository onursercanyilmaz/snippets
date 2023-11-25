import {View, Text, TouchableOpacity} from 'react-native';
import React from 'react';

// Define the type for CardProps
type CardProps = {
  onPress: ((event: GestureResponderEvent) => void) | undefined;
  cardDescription: string;
  cardTitle: string;
  buttonText: string;
  styles: any;
};

export default function Card(props: CardProps) {
  return (
    <View style={props.styles.card_container}>
      <View style={props.styles.card_body}>
        <Text style={props.styles.card_title}>{props.cardTitle}</Text>
        <Text style={props.styles.card_text}>{props.cardDescription}</Text>
      </View>
      <TouchableOpacity style={props.styles.button_container}>
        <Text onPress={props.onPress} style={props.styles.button}>
          {props.buttonText}
        </Text>
      </TouchableOpacity>
    </View>
  );
}
