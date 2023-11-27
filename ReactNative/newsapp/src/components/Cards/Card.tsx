import {View, Text, Image} from 'react-native';
import React from 'react';
import styles from './Cards.style';

interface CardProps {
  data: {
    title: string;
    description: string;
    url: string;
    urlToImage: string;
    publishedAt: string;
    content: string;
    author: string;
  };
}

const Card = (props: CardProps) => {
  return (
    <View style={styles.container}>
      <Image
        style={styles.cardImage}
        source={{
          uri:
            props.data.urlToImage?.toString() ||
            'https://picsum.photos/200/300',
        }}
      />
      <Text style={styles.cardTitle}>{props.data.title}</Text>
      <Text style={styles.cardDescription}>{props.data.description}</Text>
      <Text>{props.data.author}</Text>
    </View>
  );
};

export default Card;
