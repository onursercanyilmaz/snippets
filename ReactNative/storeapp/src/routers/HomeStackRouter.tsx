import * as React from 'react';
import {createNativeStackNavigator} from '@react-navigation/native-stack';
import ProductsPage from '../pages/ProductsPage/ProductsPage';
import ProductDetailPage from '../pages/ProductDetailPage/ProductDetailPage';
const HomeStack = createNativeStackNavigator();

export default function HomeStackScreen() {
  return (
    <HomeStack.Navigator>
      <HomeStack.Screen name="Products" component={ProductsPage} />
      <HomeStack.Screen name="ProductDetail" component={ProductDetailPage} />
    </HomeStack.Navigator>
  );
}
