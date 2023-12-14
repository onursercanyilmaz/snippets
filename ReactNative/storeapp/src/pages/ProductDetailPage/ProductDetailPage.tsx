import {
  View,
  Text,
  Image,
  Button,
  Alert,
  TouchableOpacity,
} from 'react-native';
import React from 'react';
import { SafeAreaView } from 'react-native-safe-area-context';
import styles from './ProductDetailPage.style';
import useFetch from '../../hooks/useFetch/useFetch';
import Config from 'react-native-config';

interface ProductDetailPageProps {
  navigation: any;
  route: any;
}
export default function ProductDetailPage(props: ProductDetailPageProps) {
  const { id } = props.route.params;
  const URL: string = Config.API_URL || '';

  const { data, loading, error } = useFetch({
    url: `${URL}/${id}`,
  });

  if (loading) {
    return (
      <View>
        <Text>Loading...</Text>
      </View>
    );
  }
  if (error) {
    return (
      <View>
        <Text>Error...</Text>
      </View>
    );
  }
  const buyNow = () => {
    Alert.alert('Buy Now', 'Are you sure?', [
      {
        text: 'No',
        onPress: () =>
          Alert.alert(
            'Unsuccessfull!',
            'You could not buy this product. Please try again.',
          ),
      },
      {
        text: 'Yes',
        onPress: () => Alert.alert('Successfull!', 'You bought this product.'),
      },
    ]);
  };

  return (
    <SafeAreaView style={styles.container}>
      <View style={styles.view}>
        <Image source={{ uri: data.image }} style={styles.image} />
        <Text style={styles.title}>{data.title}</Text>
        <Text style={styles.price}>{data.price}</Text>
        <TouchableOpacity onPress={buyNow} style={styles.button}>
          <Text style={styles.button}>BUY NOW</Text>
        </TouchableOpacity>
      </View>
    </SafeAreaView>
  );
}
