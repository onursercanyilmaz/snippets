import {StyleSheet, Dimensions} from 'react-native';

export default StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
  },
  view: {
    padding: 20,
    alignContent: 'center',
    justifyContent: 'center',
  },
  image: {
    height: Dimensions.get('window').height / 2,
    width: Dimensions.get('window').width,
    alignSelf: 'center',
    objectFit: 'contain',
  },
  title: {
    fontSize: 20,
    fontWeight: 'bold',
    marginTop: 20,
    color: '#000',
    textAlign: 'center',
  },
  price: {
    fontSize: 20,
    fontWeight: 'bold',
    marginTop: 20,
    color: '#000',
    textAlign: 'center',
    marginBottom: 20,
  },
  button: {
    color: '#fff',
    backgroundColor: '#000',
    padding: 10,
    borderRadius: 50,
    textAlign: 'center',
    fontFamily: 'Roboto-Regular',
    fontSize: 20,
    fontWeight: 'bold',
  },
});
