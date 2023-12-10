import {View, Text, FlatList, Image} from 'react-native';
import React, {useState, useEffect} from 'react';
import Config from 'react-native-config';
import styles from './ProductsPage.style';
import useFetch from '../../hooks/useFetch/useFetch';

interface ProductsPageProps {
  navigation: any;
}

export default function ProductsPage() {
  const URL: string = Config.API_URL || '';
  const {data, loading, error} = useFetch({url: URL});

  console.log(data);
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
        <Text style={{color: 'red'}}>{error.response.status} Error</Text>
      </View>
    );
  }
  return (
    <>
      <View>
        <FlatList
          keyExtractor={(item: any) => item.id}
          data={data}
          renderItem={(item: any) => (
            <View style={styles.listItem}>
              <Image
                source={{uri: item.item.image}}
                style={styles.listItemIcon}
              />
              <Text style={styles.listItemTitle}>{item.item.title}</Text>
              <Text style={styles.listItemPrice}>{item.item.price}</Text>
            </View>
          )}
        />
      </View>
    </>
  );
}
