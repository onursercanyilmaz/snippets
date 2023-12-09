import {View, Text} from 'react-native';
import React, {useState, useEffect} from 'react';
import axios from 'axios';
import Config from 'react-native-config';

interface ProductsPageProps {
  navigation: any;
}

export default function ProductsPage() {
  const [data, setData] = useState<any>([]);

  const fetchData = async () => {
    await axios.get(Config.API_URL!).then(res => {
      setData(res.data);
    });
  };

  useEffect(() => {
    //console.log(Config.API_URL);
    //fetchData();
  }, []);
  return (
    <View>
      {data.map((item: any) => (
        <Text>{item.title}</Text>
      ))}
    </View>
  );
}
