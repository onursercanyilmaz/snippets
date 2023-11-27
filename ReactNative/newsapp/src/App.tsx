import React, {useEffect, useState} from 'react';
import {View, Text, SafeAreaView, FlatList} from 'react-native';
import axios from 'axios';
import Card from './components/Cards/index';
import {REACT_APP_NEWS_URL} from '../config'; // Import the environment variable

export default function App() {
  const [data, setData] = useState([]);

  useEffect(() => {
    const fetchData = async () => {
      try {
        const response = await axios.get(REACT_APP_NEWS_URL, {
          headers: {
            'Content-Type': 'application/json',
            'Access-Control-Allow-Origin': '*',
          },
        });
        setData(response.data?.articles);
      } catch (error) {
        console.error('Error fetching data:', error);
      }
    };

    fetchData();
  }, []);

  return (
    <SafeAreaView>
      <View>
        {data.length > 0 ? (
          <FlatList
            data={data}
            keyExtractor={(item: any) => item.title} // Use a unique key for each item
            renderItem={({item}) => <Card key={item.title} data={item} />} // Use your Card component and pass relevant props
          />
        ) : (
          <Text>Loading...</Text>
        )}
      </View>
    </SafeAreaView>
  );
}
