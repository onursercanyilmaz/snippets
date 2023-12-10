import {View, Text, FlatList, Image} from 'react-native';
import React, {useState, useEffect} from 'react';
import Config from 'react-native-config';
import styles from './ProductsPage.style';
import useFetch from '../../hooks/useFetch/useFetch';
import Loading from '../../components/LoadingCard';
import Error from '../../components/ErrorCard';

interface ProductsPageProps {
  navigation: any;
}

export default function ProductsPage() {
  const URL: string = Config.API_URL || '';
  const {data, loading, error} = useFetch({url: URL});

  console.log(error);
  if (loading) {
    return (
      <View>
        <Loading />
      </View>
    );
  }
  if (error) {
    return <Error />;
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
