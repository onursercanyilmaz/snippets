import {Dimensions, StyleSheet} from 'react-native';

export default StyleSheet.create({
  container: {
    flex: 1,
    flexDirection: 'column',
    justifyContent: 'space-between',
    alignItems: 'center',
    margin: 10,
    padding: 10,
    borderRadius: 10,
    backgroundColor: '#fff',
    shadowColor: '#000',
    shadowOffset: {width: 5, height: 5},
    shadowOpacity: 0.5,
    shadowRadius: 10,
    elevation: 10,
  },
  cardImage: {
    flex: 1,
    width: Dimensions.get('window').height / 2,
    height: Dimensions.get('window').height / 4,
    resizeMode: 'contain',
    marginBottom: 10,
    borderTopRightRadius: 10,
    borderTopLeftRadius: 10,
  },
  cardText: {
    flex: 2,
    flexDirection: 'column',
  },
  cardTitle: {
    fontSize: 20,
    fontWeight: 'bold',
  },
  cardDescription: {
    fontSize: 16,
  },
});
